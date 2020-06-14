//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSDate;

@interface PXCPLState : NSObject <NSCopying>
{
    _Bool _isSyncing;
    _Bool _isUserPaused;
    _Bool _isInBatterySaverMode;
    _Bool _isExceedingBatteryQuota;
    _Bool _isExceedingCellularQuota;
    _Bool _isExceedingLocalStorageQuota;
    _Bool _isExceedingQuota;
    _Bool _isClientVersionTooOld;
    _Bool _isOffline;
    float _itemsToUploadProgress;
    NSDate *_syncDate;
    NSDate *_exitDate;
    unsigned long long _numberOfItemsToUpload;
    unsigned long long _numberOfItemsToAdd;
    unsigned long long _numberOfOriginalsToDownload;
    unsigned long long _numberOfItemsFailingToUpload;
    unsigned long long _numberOfReferencedItems;
}

@property(nonatomic) _Bool isOffline; // @synthesize isOffline=_isOffline;
@property(nonatomic) _Bool isClientVersionTooOld; // @synthesize isClientVersionTooOld=_isClientVersionTooOld;
@property(nonatomic) _Bool isExceedingQuota; // @synthesize isExceedingQuota=_isExceedingQuota;
@property(nonatomic) _Bool isExceedingLocalStorageQuota; // @synthesize isExceedingLocalStorageQuota=_isExceedingLocalStorageQuota;
@property(nonatomic) _Bool isExceedingCellularQuota; // @synthesize isExceedingCellularQuota=_isExceedingCellularQuota;
@property(nonatomic) _Bool isExceedingBatteryQuota; // @synthesize isExceedingBatteryQuota=_isExceedingBatteryQuota;
@property(nonatomic) _Bool isInBatterySaverMode; // @synthesize isInBatterySaverMode=_isInBatterySaverMode;
@property(nonatomic) _Bool isUserPaused; // @synthesize isUserPaused=_isUserPaused;
@property(nonatomic) unsigned long long numberOfReferencedItems; // @synthesize numberOfReferencedItems=_numberOfReferencedItems;
@property(nonatomic) unsigned long long numberOfItemsFailingToUpload; // @synthesize numberOfItemsFailingToUpload=_numberOfItemsFailingToUpload;
@property(nonatomic) unsigned long long numberOfOriginalsToDownload; // @synthesize numberOfOriginalsToDownload=_numberOfOriginalsToDownload;
@property(nonatomic) unsigned long long numberOfItemsToAdd; // @synthesize numberOfItemsToAdd=_numberOfItemsToAdd;
@property(nonatomic) float itemsToUploadProgress; // @synthesize itemsToUploadProgress=_itemsToUploadProgress;
@property(nonatomic) unsigned long long numberOfItemsToUpload; // @synthesize numberOfItemsToUpload=_numberOfItemsToUpload;
@property(copy, nonatomic) NSDate *exitDate; // @synthesize exitDate=_exitDate;
@property(copy, nonatomic) NSDate *syncDate; // @synthesize syncDate=_syncDate;
@property(nonatomic) _Bool isSyncing; // @synthesize isSyncing=_isSyncing;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqualToCPLState:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

