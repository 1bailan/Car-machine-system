// 设计模式——状态模式（行为模式）示例

#include <iostream>

class Context;

// state
class LiftState
{
protected:
    Context *context;

public:
    virtual ~LiftState() = default;

    void setContext(Context *context)
    {
        this->context = context;
    }

    // 开电梯门
    virtual void open() = 0;
    // 关电梯门
    virtual void close() = 0;
    // 电梯运行
    virtual void run() = 0;
    // 电梯停止
    virtual void stop() = 0;
};

// context
class Context
{
public:
    static LiftState *openningState;
    static LiftState *closingState;
    static LiftState *runningState;
    static LiftState *stoppingState;

    LiftState &getLiftState()
    {
        return *liftState;
    }

    void setLiftState(LiftState *liftState)
    {
        this->liftState = liftState;
        // 把当前的环境通知到各个实现类中
        this->liftState->setContext(this);
    }

    void open()
    {
        liftState->open();
    }

    void close()
    {
        liftState->close();
    }

    void run()
    {
        liftState->run();
    }

    void stop()
    {
        liftState->stop();
    }

private:
    LiftState *liftState;
};

// ConcreteState
class OpenningState : public LiftState
{
public:
    // 打开电梯门
    void open()
    {
        std::cout << "门开启电梯..." << std::endl;
    }

    // 开门状态下，可以按下“关门”按钮
    void close()
    {
        // 将当前状态修改为关门状态
        context->setLiftState(Context::closingState);
        // 关门
        context->getLiftState().close();
    }

    // 开门状态下不能运行！
    void run()
    {
        // do nothing;
    }

    // 开门状态下，按停止没效果
    void stop()
    {
        // do nothing
    }
};

// 关门状态
class ClosingState : public LiftState
{
public:
    // 打开电梯门
    void open()
    {
        // 将当前状态修改为开门状态
        context->setLiftState(Context::openningState);
        context->getLiftState().open();
    }

    // 关门状态
    void close()
    {
        std::cout << "电梯门关闭..." << std::endl;
    }

    // 关门状态，可以按“运行”按钮
    void run()
    {
        // 将当前状态修改为运行状态
        context->setLiftState(Context::runningState);
        context->getLiftState().run();
    }

    // 关门状态下，可以切换到停止状态
    void stop()
    {
        // 将当前状态修改为停止状态
        context->setLiftState(Context::stoppingState);
        context->getLiftState().stop();
    }
};

// 运行状态
class RunningState : public LiftState
{
public:
    // 运行状态，按“开门”按钮没效课
    void open()
    {
        // do nothing
    }

    // 运行状态按“关门”按钮没效果
    void close()
    {
        // do nothing;
    }

    // 运行状态
    void run()
    {
        std::cout << "电梯上下运行..." << std::endl;
    }

    // 运行状态下，可按“停止”
    void stop()
    {
        // 将当前状态修改为停止状态
        context->setLiftState(Context::stoppingState);
        context->getLiftState().stop();
    }
};

// 停止状态
class StoppingState : public LiftState
{
public:
    // 停止状态，可以打开电梯门
    void open()
    {
        // 将当前状态修改为开门状态
        context->setLiftState(Context::openningState);
        context->getLiftState().open();
    }

    // 停止状态下，可以按下“关门”按钮没效果 
    void close()
    {
        // do nothing
    }

    // 关门状态，可以按“运行”按钮！
    void run()
    {
        // 将当前状态修改为运行状态
        context->setLiftState(Context::runningState);
        context->getLiftState().run();
    }

    // 开门状态下，按停止没效果
    void stop()
    {
        std::cout << "电梯停止了..." << std::endl;
    }
};

LiftState *Context::openningState = new OpenningState();
LiftState *Context::closingState = new ClosingState();
LiftState *Context::runningState = new RunningState();
LiftState *Context::stoppingState = new StoppingState();

int main()
{
    Context context;
    context.setLiftState(Context::closingState);

    context.open();
    context.close();
    context.run();
    context.stop();

    delete Context::openningState;
    delete Context::closingState;
    delete Context::runningState;
    delete Context::stoppingState;

    return 0;
}


/*
这段代码实现了一个状态模式（State Pattern）的示例，用于模拟电梯在不同状态下的行为。状态模式是一种行为设计模式，它允许一个对象在其内部状态改变时改变其行为，看起来像是改变了其类。

### 实现原理

1. **状态类（LiftState）**：定义了电梯的所有可能状态（开门、关门、运行、停止）的接口。每个状态类都继承自`LiftState`，并实现了这些接口。

2. **上下文类（Context）**：持有当前电梯状态对象，并提供了切换状态的方法。`Context`类通过`setLiftState`方法切换状态，并通过调用当前状态对象的方法来执行相应的操作。

3. **具体状态类（ConcreteState）**：实现了`LiftState`接口，并定义了每个状态下的具体行为。例如，`OpenningState`类定义了电梯在开门状态下的行为。

### 用途

状态模式的主要用途是处理对象在不同状态下的行为变化。在电梯的例子中，电梯的行为（如开门、关门、运行、停止）会根据其当前状态而变化。通过状态模式，可以避免使用大量的`if-else`或`switch`语句来处理状态变化，使代码更加清晰和易于维护。

### 注意事项

1. **状态类数量**：状态模式中可能需要定义大量的状态类，这会增加类的数量。因此，在状态数量较多时，需要权衡是否使用状态模式。

2. **状态切换**：状态模式要求状态切换是显式的，即通过上下文类的方法进行状态切换。这有助于保持状态的一致性。

3. **性能考虑**：每次状态切换都会创建新的状态对象，这可能会影响性能。因此，在性能敏感的应用中需要谨慎使用。

4. **状态依赖**：上下文类依赖于具体的状态类，这可能导致上下文类与具体状态类之间的耦合度较高。在设计时需要考虑这一点。

通过这段代码，我们可以看到状态模式是如何通过将状态和行为分离，使得电梯在不同状态下能够表现出不同的行为。这种模式在处理复杂的状态转换和状态行为时非常有用。
*/