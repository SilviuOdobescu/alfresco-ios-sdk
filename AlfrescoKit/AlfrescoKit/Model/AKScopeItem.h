/*
 ******************************************************************************
 * Copyright (C) 2005-2015 Alfresco Software Limited.
 *
 * This file is part of the Alfresco Mobile SDK.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *****************************************************************************
 */

/** AKScopeItem
 
 Author: Tauseef Mughal (Alfresco)
 */

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, AKScopeType)
{
    AKScopeType_NONE = 0,
    AKScopeType_Repository,
    AKScopeType_Sites,
    AKScopeType_Favorites,
    AKScopeType_Sync,
    AKScopeType_MyFiles,
    AKScopeType_SharedFiles,
};

@interface AKScopeItem : NSObject

@property (nonatomic, strong, readonly) NSString *identifier;
@property (nonatomic, strong, readonly) NSURL *imageURL;
@property (nonatomic, assign, readonly) AKScopeType scopeType;
@property (nonatomic, strong, readonly) NSString *name;
@property (nonatomic, strong, readonly) id userInfo;

- (instancetype)initWithIdentifier:(NSString *)identifier imageURL:(NSURL *)imageURL name:(NSString *)name;
- (instancetype)initWithIdentifier:(NSString *)identifier imageURL:(NSURL *)imageURL name:(NSString *)name userInfo:(id)userInfo;
- (instancetype)initWithIdentifier:(NSString *)identifier scopeType:(AKScopeType)scopeType name:(NSString *)name;
- (instancetype)initWithIdentifier:(NSString *)identifier scopeType:(AKScopeType)scopeType name:(NSString *)name userInfo:(id)userInfo;

@end
