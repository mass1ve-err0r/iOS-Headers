//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSObject.h>

#import <ClassKit/CLSRelationable-Protocol.h>

@class CLSHandout, NSArray, NSDate, NSString, NSURL;

@interface CLSHandoutAttachment : CLSObject <CLSRelationable>
{
    int _shareType;
    int _permissionType;
    NSURL *_URL;
    NSArray *_contextPath;
    NSString *_title;
    NSString *_bundleIdentifier;
    NSString *_contentStoreIdentifier;
    int _completionStatus;
    long long _displayOrder;
    long long _contextType;
    NSDate *_dateLastCompleted;
    _Bool _locked;
    int _type;
    NSString *_storeIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)relations;
@property(copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(nonatomic, getter=isLocked) _Bool locked; // @synthesize locked=_locked;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(copy, nonatomic) NSString *bundleIdentifier;
@property(nonatomic) long long displayOrder;
@property(nonatomic) int permissionType;
@property(nonatomic) int shareType;
@property(nonatomic) long long contextType;
@property(copy, nonatomic) NSString *contentStoreIdentifier;
@property(nonatomic) int completionStatus;
@property(retain, nonatomic) NSDate *dateLastCompleted;
@property(copy, nonatomic) NSArray *contextPath;
@property(copy, nonatomic) NSURL *URL;
@property(copy, nonatomic) NSString *title;
- (void)removeAsset:(id)arg1;
- (void)addAsset:(id)arg1;
@property(readonly, nonatomic) NSArray *assets;
- (void)mergeWithObject:(id)arg1;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)validateObject:(id *)arg1;
- (id)initWithType:(int)arg1 title:(id)arg2;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CLSHandout *parent; // @dynamic parent;
@property(readonly, nonatomic) NSString *parentObjectID; // @dynamic parentObjectID;
@property(readonly) Class superclass;

@end

