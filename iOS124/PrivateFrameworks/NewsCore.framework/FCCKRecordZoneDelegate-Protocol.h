//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class CKRecordZoneID;

@protocol FCCKRecordZoneDelegate <NSObject>
- (void)ensureRecordZoneExistsWithID:(CKRecordZoneID *)arg1 completionHandler:(void (^)(CKRecordZone *, NSError *))arg2;
@end

