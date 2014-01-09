//
//  HudView.h
//  MyLocations
//
//  Created by John Hopkins on 08/01/2014.
//  Copyright (c) 2014 cocoacoda. All rights reserved.
//

@interface HudView : UIView

+ (instancetype)hudInView:(UIView *)view animated:(BOOL)animated;

@property (nonatomic, strong) NSString *text;

@end
