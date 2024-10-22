# Car-machine-system  
## 新能源车智慧车机系统设计

### QT 项目概述：新能源车智慧车机系统设计

![image-20240710213845417](./README.assets/image-20240710213845417.png)

<center>参考图片<center>



#### 项目背景

随着物联网技术的发展和新能源车市场的快速增长，智慧车机系统在提升驾驶体验、提高车辆安全性和实现智能管理方面具有巨大的潜力。智能车机市场近年来呈现出快速增长的趋势，预计2024年全球智能车机市场规模将达到500亿美元。本项目旨在开发一个基于物联网技术的新能源车智慧车机系统，以满足现代驾驶需求，并在未来市场中占据一席之地。

#### 项目目标

开发一个集成多种功能的智慧车机系统，通过与车辆的深度集成，实现智能化管理和操作。系统将具备以下主要功能：

- 导航和娱乐功能
- 高级驾驶辅助系统
- 车联网和自动驾驶支持
- 语音控制
- 实时天气和时间显示
- 音乐播放器
- 流量充值服务
- 道路救援服务
- 倒车影像
- 座椅通风/加热调节

---

#### 功能详细描述

1. **系统启动**
   
   - 车辆启动后，车机系统自动开机并显示开机动画。
   - 开机动画符合项目主题，体现产品特点。
   
2. **主界面**
   
   - 使用QT框架实现所有GUI设计。
   - 主界面布局合理美观，用户可通过触摸屏与车机系统交互。
   - 主界面显示系统时间和天气信息，天气图标根据实时天气信息自动更新。
   
3. **语音控制**
   - 支持点击语音控制APP、原车语音按键和“你好小X”唤醒语音控制。
   - 智能语音模型训练后，系统能根据语音指令识别并执行命令，语音转换为文本并实时显示。

4. **音频播放器**

   - 支持基本的音乐播放功能：上/下一首、暂停/恢复、进度显示、音量调节。
   - 可读取指定路径下的音频文件，播放音频时背景动态显示。

5. **流量充值**
   - 用户可查看剩余流量并进行充值，通过扫码支付选择流量套餐。
   - 登录和充值通过云服务器实现。
   - 使用SQlist3实现服务器的数据存储格式

   数据库名称：Server.db

   表一：用户信息表

   | UserID（INTEGER)UNIQUE | Username(TEXT) | password(TEXT) | PHONE(TEXT) |
   | ---------------------- | -------------- | -------------- | ----------- |
   |                        |                |                |             |
   |                        |                |                |             |
   |                        |                |                |             |

   PASSWORD加密方式MD5

   表二：充值记录表

   | UserID（INTEGEG）UNIQUE | flux充值流量（REAL） | 充值时间（dateTime） |
   | ----------------------- | -------------------- | -------------------- |
   |                         |                      |                      |
   |                         |                      |                      |
   |                         |                      |                      |

   用户注册：

1. **道路救援**
   - 提供一键道路救援服务，发送短信获取位置。
   - 支持拖车、开锁、换电瓶、换备胎等救援服务。
   
2. **倒车影像**
   - 支持倒车影像功能，实时显示摄像头获取的图像。
   
3. **座椅调节**
   
   - 实现座椅通风和加热功能，用户可调节风量等设置。
   <<<<<<< Updated upstream
   
4. **导航功能**
   
   - 从高德API获取地图数据，通过HTML显示
   - 使用高德API，来实现

---
>>>>>>> Stashed changes

#### 项目实施

1. **技术栈**
   - 使用C++和QT框架开发。
   - 数据库采用SQLite3。
   - 图形界面采用QT Widgets。
   - 语音控制模型训练及实现。
2. **项目结构**
   - `main.cpp`：主程序入口，负责系统初始化和启动。
   - `database.cpp`：数据库操作，包括创建表、插入数据、查询数据等。
   - `gui.cpp`：界面设计与实现。
   - `audio.cpp`：音频播放功能实现。
   - `network.cpp`：网络通信模块，处理流量充值、救援服务等功能。
   - `voice.cpp`：语音控制模块。（可做可不做）
   - `gps.cpp`：导航模块。
   - 
3. **开发环境**
   - 开发工具：QT Creator
   - 编译工具：GXX
   - 测试工具：GDB
   - 版本控制：GitHub
4. **开发步骤**
   - **需求分析**：明确系统需求和功能。
   - **系统设计**：设计系统架构和模块划分。
   - **代码实现**：根据设计文档实现各模块功能。
   - **测试与调试**：进行单元测试、集成测试和系统测试。
   - **部署与维护**：将系统部署到目标环境，并进行后续维护。

<<<<<<< Updated upstream

5. **项目交付**
   - 完整的项目源码
   
   - 项目功能文档和README
   
   - 项目演示视频
   
   - 自动化编译的Makefile
   
     项目测试文档
     =======

>>>>>>> Stashed changes

#### QT GUI 设计概述

1. **系统启动界面**
   - 使用FFmpeg编码mp3实现开机动画。
2. **主界面**
   
   - 使用QT Widgets创建主界面布局，使用QLabel显示时间和天气信息。
   - 使用心知天气API获取实时天气信息，并根据返回的数据更新天气图标。
3. **语音控制界面**
   - 使用QT Speech库实现语音识别和语音控制功能。
   - 通过QPushButton触发语音控制，显示语音识别结果。
4. **音频播放器界面**
   
   - 使用QMediaPlayer实现音频播放功能。
   - 创建QSlider用于音量调节，QPushButton用于播放控制（上/下一首、暂停/恢复）。
   - 可选FFmpeg+状态模式（设计模式）
5. **流量充值界面**
   - 使用QNetworkAccessManager实现扫码支付和流量充值功能。
   -  二维码API:https://api.pwmqr.com/qrcode/create/?url={目标}                 
   - QDialog用于显示充值界面。
6. **道路救援界面**

   - 使用QPushButton实现一键道路救援功能，通过短信API发送救援请求。

   - 使用QGeoPositionInfoSource获取位置数据。
   <<<<<<< Updated upstream

   - 通过MQTT获取车况来判断是否遭遇了车祸等状况，

     车况参数表：

   | 车辆紧急制动EBA(bool)    | true | false |
   | ------------------------ | ---- | ----- |
   | 车速（float）            | 300  | 0     |
   | 摆动幅度（float）        | 180  | 0     |
   | 安全气囊是否弹出（bool） | true | false |

   ```json
   {
     "车辆紧急制动EBA": {
       "true": [
         {"车速": 300.0},
         {"摆动幅度": 180.0},
         {"安全气囊是否弹出": true}
       ],
       "false": [
         {"车速": 0.0},
         {"摆动幅度": 0.0},
         {"安全气囊是否弹出": false}
       ]
     }
   }
   ```

   

=======

>>>>>>> Stashed changes
7. **倒车影像界面**
   - 使用`opencv4.5.2`实现摄像头图像获取，QLabel用于实时显示图像。
8. **座椅调节界面**
   - 使用QSlider实现座椅通风和加热调节功能。

#### 总结

本项目通过QT开发新能源车智慧车机系统，结合物联网技术，提升车辆智能化水平，满足现代用户需求，具有广阔的市场前景和应用价值。QT框架的强大功能和灵活性使得系统界面美观且操作流畅，提高了用户体验。



## 完成表

| 功能             | 进度 | 完成时间 |
| ---------------- | ---- | -------- |
| **系统启动**     | 80%  | 7/14     |
| **主界面**       | 80%  | 7/13     |
| **语音控制**     |      |          |
| **音频播放器**   |      |          |
| **流量充值界面** |      |          |
| **道路救援界面** |      |          |
| **倒车影像界面** |      |          |
| **座椅调节界面** |      |          |
| **天气界面**     | 90%  | 7/10     |



