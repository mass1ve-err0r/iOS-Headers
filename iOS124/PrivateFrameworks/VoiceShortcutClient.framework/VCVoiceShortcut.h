//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcutClient/NSSecureCoding-Protocol.h>

@class INImage, NSData, NSDate, NSString, WFLWorkflow;

@interface VCVoiceShortcut : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_phrase;
    NSString *_associatedAppBundleIdentifier;
    NSDate *_dateCreated;
    NSDate *_dateLastModified;
    WFLWorkflow *_workflow;
    INImage *_keyImage;
    NSString *_shortcutName;
    NSString *_shortcutDescription;
    NSData *_serializedWorkflowData;
    NSData *_keyImageData;
    unsigned long long _cachedBlacklistStatus;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isValidVoiceShortcut:(id)arg1 error:(id *)arg2;
+ (void)initialize;
@property(nonatomic) unsigned long long cachedBlacklistStatus; // @synthesize cachedBlacklistStatus=_cachedBlacklistStatus;
@property(retain, nonatomic) NSData *keyImageData; // @synthesize keyImageData=_keyImageData;
@property(retain, nonatomic) NSData *serializedWorkflowData; // @synthesize serializedWorkflowData=_serializedWorkflowData;
@property(copy, nonatomic) NSString *shortcutDescription; // @synthesize shortcutDescription=_shortcutDescription;
@property(copy, nonatomic) NSString *shortcutName; // @synthesize shortcutName=_shortcutName;
@property(retain, nonatomic) INImage *keyImage; // @synthesize keyImage=_keyImage;
@property(retain, nonatomic) WFLWorkflow *workflow; // @synthesize workflow=_workflow;
@property(retain, nonatomic) NSDate *dateLastModified; // @synthesize dateLastModified=_dateLastModified;
@property(retain, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(copy, nonatomic) NSString *associatedAppBundleIdentifier; // @synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier;
@property(copy, nonatomic) NSString *phrase; // @synthesize phrase=_phrase;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)_handleIntentActionIfExists;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isValid:(id *)arg1;
@property(readonly, nonatomic) _Bool hasBeenModified;
- (id)initWithPhrase:(id)arg1 workflow:(id)arg2 error:(id *)arg3;
- (id)initWithIdentifier:(id)arg1 phrase:(id)arg2 shortcutName:(id)arg3 shortcutDescription:(id)arg4 associatedAppBundleIdentifier:(id)arg5 dateCreated:(id)arg6 dateLastModified:(id)arg7 serializedWorkflowData:(id)arg8 keyImageData:(id)arg9 error:(id *)arg10;

@end

