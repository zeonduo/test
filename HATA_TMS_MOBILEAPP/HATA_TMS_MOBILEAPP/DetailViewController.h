//
//  DetailViewController.h
//  HATA_TMS_MOBILEAPP
//
//  Created by Ryan.Lim on 2015. 8. 5..
//  Copyright (c) 2015년 Obigo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

