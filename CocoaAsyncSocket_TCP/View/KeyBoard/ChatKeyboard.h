//
//  ChatKeyboard.h
//  CocoaAsyncSocket_TCP
//
//  Created by 孟遥 on 2017/5/15.
//  Copyright © 2017年 mengyao. All rights reserved.
//
#define CTKEYBOARD_DEFAULTHEIGHT   273

#import <UIKit/UIKit.h>

@interface ChatKeyboard : UIView
//仅声明,消除警告
- (void)systemKeyboardWillShow:(NSNotification *)note;

@property (nonatomic, strong) UIViewController *target;






@end
