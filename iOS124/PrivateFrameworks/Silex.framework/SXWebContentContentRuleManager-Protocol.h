//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class NFPromise, NSString;

@protocol SXWebContentContentRuleManager <NSObject>
- (NFPromise *)configureContentRules;
- (void)removeContentListForIdentifier:(NSString *)arg1;
- (void)addContentRuleList:(NSString *)arg1 identifier:(NSString *)arg2;
@end

