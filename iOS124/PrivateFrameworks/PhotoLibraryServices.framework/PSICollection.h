//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PSIObject.h>

#import <PhotoLibraryServices/NSCopying-Protocol.h>

@class NSDate, NSString, PSIAsset, PSIDate;

@interface PSICollection : PSIObject <NSCopying>
{
    PSIDate *_startDate;
    PSIDate *_endDate;
    NSString *_title;
    NSString *_subtitle;
    PSIAsset *_keyAsset;
    unsigned long long _type;
    unsigned long long _numberOfAssets;
    NSDate *_sortDate;
}

@property(readonly) NSDate *sortDate; // @synthesize sortDate=_sortDate;
@property(readonly) unsigned long long numberOfAssets; // @synthesize numberOfAssets=_numberOfAssets;
@property(readonly) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) PSIAsset *keyAsset; // @synthesize keyAsset=_keyAsset;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly) PSIDate *endDate; // @synthesize endDate=_endDate;
@property(readonly) PSIDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initForCopy:(_Bool)arg1;
- (id)initWithUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 subtitle:(id)arg5 keyAsset:(id)arg6 type:(unsigned long long)arg7 numberOfAssets:(unsigned long long)arg8 sortDate:(id)arg9;

@end

