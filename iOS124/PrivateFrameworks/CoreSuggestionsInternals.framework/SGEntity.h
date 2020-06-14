//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSPerson, NSData, NSMutableSet, NSSet, NSString, SGDuplicateKey, SGRecordId, SGSimpleTimeRange;

@interface SGEntity : NSObject
{
    NSMutableSet *_tags;
    NSSet *_tagsSnapshot;
    struct _opaque_pthread_mutex_t _tagsLock;
    unsigned int _state;
    SGRecordId *_recordId;
    SGDuplicateKey *_duplicateKey;
    unsigned long long _extractionType;
    NSString *_sourceKey;
    NSString *_content;
    NSString *_title;
    CSPerson *_author;
    struct SGUnixTimestamp_ _creationTimestamp;
    struct SGUnixTimestamp_ _lastModifiedTimestamp;
    SGSimpleTimeRange *_timeRange;
    NSData *_structuredData;
    double _quality;
    NSMutableSet *_locations;
    long long _masterEntityId;
    long long _groupId;
    struct _NSRange _contentRangeOfInterest;
}

@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
@property(nonatomic) long long masterEntityId; // @synthesize masterEntityId=_masterEntityId;
@property(retain, nonatomic) NSMutableSet *locations; // @synthesize locations=_locations;
@property(nonatomic) double quality; // @synthesize quality=_quality;
@property(copy, nonatomic) NSData *structuredData; // @synthesize structuredData=_structuredData;
@property(retain, nonatomic) SGSimpleTimeRange *timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) struct SGUnixTimestamp_ lastModifiedTimestamp; // @synthesize lastModifiedTimestamp=_lastModifiedTimestamp;
@property(nonatomic) struct SGUnixTimestamp_ creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(retain, nonatomic) CSPerson *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) struct _NSRange contentRangeOfInterest; // @synthesize contentRangeOfInterest=_contentRangeOfInterest;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *sourceKey; // @synthesize sourceKey=_sourceKey;
@property(nonatomic) unsigned long long extractionType; // @synthesize extractionType=_extractionType;
@property(retain, nonatomic) SGDuplicateKey *duplicateKey; // @synthesize duplicateKey=_duplicateKey;
@property(retain, nonatomic) SGRecordId *recordId; // @synthesize recordId=_recordId;
- (void).cxx_destruct;
- (id)description;
- (id)fieldsToSaveOnConfirmation;
- (_Bool)isPartiallyDownloaded;
- (_Bool)isInhuman;
- (id)templateShortName;
- (id)extraKeyTag;
- (id)tags;
- (void)addTag:(id)arg1;
- (_Bool)isFromForwardedMessage;
- (_Bool)isCancelled;
- (_Bool)isNaturalLanguageEvent;
- (id)loadOrigin:(id)arg1;
- (void)validate;
- (unsigned long long)hash;
- (_Bool)isEqualToEntity:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithEntity:(id)arg1;
- (id)init;

@end

