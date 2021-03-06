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
//  SharedObjects.h
//  iShop3.0
//
//  Created by Admin on 11/04/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AssetsDataEntity;
@class AppInfoEntity;
@class UserProfileEntity;

@interface SharedObjects : NSObject {
	
	AssetsDataEntity *assetsDataEntity;
	
	AppInfoEntity *appInfoEntity;
	
	UserProfileEntity *userProfileData;

}

@property (nonatomic, assign) AssetsDataEntity *assetsDataEntity;

@property (nonatomic, assign) AppInfoEntity *appInfoEntity;

@property (nonatomic, assign) UserProfileEntity *userProfileData;

#pragma mark singleton object methods 

+ (SharedObjects *)sharedInstance;

@end
