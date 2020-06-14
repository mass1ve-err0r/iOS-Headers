//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecord, NSDate, NSString;

@interface FCReadingListEntry : NSObject
{
    NSString *_identifier;
    NSString *_articleID;
    NSDate *_dateAdded;
    unsigned long long _origin;
}

@property(readonly, nonatomic) unsigned long long origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
@property(readonly, copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) CKRecord *asCKRecord;
- (id)initWithEntryID:(id)arg1 articleID:(id)arg2 dateAdded:(id)arg3 origin:(unsigned long long)arg4;
- (id)dictionaryRepresentation;
- (id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2;

@end

