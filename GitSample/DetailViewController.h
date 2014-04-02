//
//  DetailViewController.h
//  GitSample
//
//  Created by hotmix on 2014/04/02.
//  Copyright (c) 2014年 bizancom. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
