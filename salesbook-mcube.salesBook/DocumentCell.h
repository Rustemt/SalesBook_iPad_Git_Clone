//
//  DocumentCell.h
//  SalesBook
//
//  Created by Frank Wittmann on 30.04.13.
//  Copyright (c) 2013 Siller AG. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "CommonCollectionCell.h"

@interface DocumentCell : CommonCollectionCell

@property (weak, nonatomic) IBOutlet UILabel *labelDocumentNumber;
@property (weak, nonatomic) IBOutlet UILabel *labelCustomerNumber;

@end
