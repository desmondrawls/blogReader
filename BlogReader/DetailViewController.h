//
//  DetailViewController.h
//  BlogReader
//
//  Created by Family Pompa Alarcón Rawls on 10/6/14.
//  Copyright (c) 2014 Family Pompa Alarcón Rawls. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

