//
//  LocationCell.h
//  MyLocations
//
//  Created by John Hopkins on 09/01/2014.
//  Copyright (c) 2014 cocoacoda. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LocationCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *descriptionLabel;
@property (nonatomic, weak) IBOutlet UILabel *addressLabel;

@end
