//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Bulletin.h"

@class NSString;

@interface PurchaseIntentBulletin : Bulletin
{
    NSString *_appBundleId;
}

@property(retain, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
- (void).cxx_destruct;
- (void)handleBulletinActionResponse:(id)arg1;
- (id)newBulletinRequest;
- (id)copyBulletinDictionary;
- (id)initWithBulletinDictionary:(id)arg1;
- (id)init;

@end

