//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface PurchaseIntent : NSObject
{
    NSString *_productIdentifier;
    NSString *_productName;
    NSString *_appBundleId;
    NSString *_appName;
    NSNumber *_timestamp;
}

@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
- (void).cxx_destruct;
- (id)description;

@end

