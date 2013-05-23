//
//  CustomerSelectorDetailViewController.h
//  SalesBook
//
//  Created by Julian Knab on 07.03.13.
//  Copyright (c) 2013 Siller AG. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "SAGObjectSelectionManager.h"

@interface CustomerSelectorDetailViewController : UIViewController<ObjectSelectionManagerProtocol>

@property (nonatomic, weak) id delegate;

@end