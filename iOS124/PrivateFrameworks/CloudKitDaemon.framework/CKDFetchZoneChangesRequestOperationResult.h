//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CKDFetchZoneChangesRequestOperationResult : NSObject
{
    _Bool _hasPendingArchivedRecords;
    NSData *_resultServerChangeTokenData;
    NSData *_resultClientChangeTokenData;
    long long _status;
}

@property(nonatomic) _Bool hasPendingArchivedRecords; // @synthesize hasPendingArchivedRecords=_hasPendingArchivedRecords;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSData *resultClientChangeTokenData; // @synthesize resultClientChangeTokenData=_resultClientChangeTokenData;
@property(retain, nonatomic) NSData *resultServerChangeTokenData; // @synthesize resultServerChangeTokenData=_resultServerChangeTokenData;
- (void).cxx_destruct;
- (id)init;

@end

