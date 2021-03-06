/*
 * ###
 * PHR_IphoneNative
 * %%
 * Copyright (C) 1999 - 2012 Photon Infotech Inc.
 * %%
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * ###
 */
//
//  AddToBagViewController.h
//  Phresco
//
//  Created by photon on 11/25/11.
//  Copyright 2011 EWR. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ViewCartController;
@class CheckOutViewController;
@class BrowseViewController;
@class SpecialOffersViewController;
@class Tabbar;

@interface AddToBagViewController : UIViewController<UITableViewDelegate, UITableViewDataSource,UITextFieldDelegate> {

    UIScrollView *scrollView;
    
    UITableView		*addToBagTable;
    
    NSMutableArray *productImageArray;
	
	NSMutableArray	*productNameArray;
    
    NSIndexPath *pathDelete;
    
    NSString *cartCount;
    
    UITextField *txtQty;
    
    UILabel *lblSubtotal;
    
    NSInteger theInteger;
    
    UILabel *myCartView;
    
    UIButton *viewMyCart;
    
    NSMutableArray *inputTexts;

    UIButton *updateCart;
    
    int insVal;
    int purchase;
    int delIndex;

    
    Tabbar *tabbar;
    BrowseViewController* browseViewController;
    SpecialOffersViewController* specialOffersViewController;
    CheckOutViewController* checkCartController;
    ViewCartController  *viewCartController;

}

@property (nonatomic, retain) UIScrollView *scrollView;

@property (nonatomic, retain) UITableView		*addToBagTable;

@property (nonatomic, retain) NSMutableArray *productImageArray;

@property (nonatomic, retain) NSMutableArray	*productNameArray;

@property (nonatomic, retain) NSString *cartCount;

@property (nonatomic, retain)  BrowseViewController* browseViewController;

@property (nonatomic, retain) SpecialOffersViewController* specialOffersViewController;

@property (nonatomic, retain) ViewCartController  *viewCartController;

@property (nonatomic, retain) CheckOutViewController* checkCartController;


-(void)goBack:(id)sender;

-(void) loadNavigationBar;

-(void) initializeTableView;

-(void)removeIndex:(id)sender;

-(void)updateAction:(id)sender;

-(void)viewAction:(id)sender;

@end
