/*
  Licensed to the Apache Software Foundation (ASF) under one
  or more contributor license agreements.  See the NOTICE file
  distributed with this work for additional information
  regarding copyright ownership.  The ASF licenses this file
  to you under the Apache License, Version 2.0 (the
  "License"); you may not use this file except in compliance
  with the License.  You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing,
  software distributed under the License is distributed on an
  "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
  KIND, either express or implied.  See the License for the
  specific language governing permissions and limitations
  under the License.
 */
 
#import <Foundation/Foundation.h>


@interface CMISURLUtil : NSObject

/// utility method to obtain a URL string for given parameter and string value
+ (NSString *)urlStringByAppendingParameter:(NSString *)parameterName value:(NSString *)parameterValue urlString:(NSString *)urlString;

/// convenient utility method to obtain a URL string for given parameter and boolean value
+ (NSString *)urlStringByAppendingParameter:(NSString *)parameterName boolValue:(BOOL)parameterValue urlString:(NSString *)urlString;

/// convenient utility method to obtain a URL string for given parameter and boolean value
+ (NSString *)urlStringByAppendingParameter:(NSString *)parameterName numberValue:(NSNumber *)parameterValue urlString:(NSString *)urlString;

/// utility method to obtain a URL string by appending the given path
+ (NSString *)urlStringByAppendingPath:(NSString *)path urlString:(NSString *)urlString;

/// utility method to obtain a URL string
+ (NSURL *)urlStringByAppendingParameter:(NSString *)parameterName value:(NSString *)parameterValue url:(NSURL *)url;

/// utility method to encode a URL parameter value
+ (NSString *)encodeUrlParameterValue:(NSString *)value;

@end