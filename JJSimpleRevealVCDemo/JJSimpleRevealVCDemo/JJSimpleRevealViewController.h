//
//  JJSimpleRevealViewController.h
//  JJSimpleRevealVCDemo
//
//  Created by 刘佳杰 on 16/11/1.
//  Copyright © 2016年 刘佳杰. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JJSimpleRevealViewController : UIViewController

@property (nonatomic) CGFloat leftViewWidth;

- (instancetype)initWithLeftViewController:(UIViewController *)leftViewController;

@end
