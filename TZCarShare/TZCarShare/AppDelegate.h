//
//  AppDelegate.h
//  TZCarShare
//
//  Created by 杨利 on 2018/8/14.
//  Copyright © 2018年 yangli. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MMDrawerController.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic,strong,readonly)MMDrawerController *drawerController;

@end

