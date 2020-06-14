//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccountUI/JSExport-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol VSJSSubscription <JSExport>
@property(copy, nonatomic) NSString *billingIdentifier;
@property(copy, nonatomic) NSArray *tierIdentifiers;
@property(nonatomic) long long accessLevel;
@property(copy, nonatomic) NSDate *expirationDate;
@property(copy, nonatomic) NSString *bundleId;
- (id)init;
@end

