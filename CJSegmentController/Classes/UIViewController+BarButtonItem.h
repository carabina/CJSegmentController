//
//  UIViewController+BarButtonItem.h
//  CJSegmentControllerDemo
//
//  Created by Carl Ji on 16/10/31.
//  Copyright © 2016年 Carl Ji. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (BarButtonItem)

@property (nonatomic, strong) UIBarButtonItem *leftBarItem;
@property (nonatomic, strong) UIBarButtonItem *rightBarItem;

/**
 Don't Call by yourself
 */
- (NSString *)segmentTitle;

@end
