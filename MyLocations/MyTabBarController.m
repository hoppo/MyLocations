//
//  MyTabBarController.m
//  MyLocations
//
//  Created by John Hopkins on 14/01/2014.
//  Copyright (c) 2014 cocoacoda. All rights reserved.
//

#import "MyTabBarController.h"

@implementation MyTabBarController

- (UIStatusBarStyle)preferredStatusBarStyle
{
    return UIStatusBarStyleLightContent;
}

- (UIViewController *)childViewControllerForStatusBarStyle
{
    return nil;
}

@end
