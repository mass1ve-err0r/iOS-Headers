//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMCore/NSCopying-Protocol.h>
#import <IMCore/NSSecureCoding-Protocol.h>

@class DDScannerResult, IMBalloonPluginDataSource, NSArray, NSAttributedString, NSData, NSDate, NSDictionary, NSString, NSURL;

@interface IMPluginPayload : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _update;
    _Bool _sticker;
    _Bool _shouldExpire;
    _Bool _isPlayed;
    _Bool _isFromMe;
    NSAttributedString *_text;
    NSData *_data;
    NSURL *_url;
    NSString *_breadcrumbText;
    NSString *_statusText;
    NSDictionary *_userInfo;
    NSString *_messageGUID;
    NSDate *_time;
    NSString *_associatedMessageGUID;
    NSString *_pluginBundleID;
    NSArray *_consumedSessionPayloads;
    NSString *_pluginSessionGUID;
    DDScannerResult *_dataDetectedResult;
    NSArray *_attachments;
    IMBalloonPluginDataSource *_datasource;
    NSString *_sender;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(nonatomic) _Bool isFromMe; // @synthesize isFromMe=_isFromMe;
@property(nonatomic) __weak IMBalloonPluginDataSource *datasource; // @synthesize datasource=_datasource;
@property(retain, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) DDScannerResult *dataDetectedResult; // @synthesize dataDetectedResult=_dataDetectedResult;
@property(retain, nonatomic) NSString *pluginSessionGUID; // @synthesize pluginSessionGUID=_pluginSessionGUID;
@property(nonatomic) _Bool isPlayed; // @synthesize isPlayed=_isPlayed;
@property(retain, nonatomic) NSArray *consumedSessionPayloads; // @synthesize consumedSessionPayloads=_consumedSessionPayloads;
@property(retain, nonatomic) NSString *pluginBundleID; // @synthesize pluginBundleID=_pluginBundleID;
@property(retain, nonatomic) NSString *associatedMessageGUID; // @synthesize associatedMessageGUID=_associatedMessageGUID;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *messageGUID; // @synthesize messageGUID=_messageGUID;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool shouldExpire; // @synthesize shouldExpire=_shouldExpire;
@property(nonatomic, getter=isSticker) _Bool sticker; // @synthesize sticker=_sticker;
@property(nonatomic, getter=isUpdate) _Bool update; // @synthesize update=_update;
@property(retain, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;
@property(retain, nonatomic) NSString *breadcrumbText; // @synthesize breadcrumbText=_breadcrumbText;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSAttributedString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToPluginPayload:(id)arg1;
@property(readonly, nonatomic) _Bool shouldHideAttachments;
- (void)addAttachmentsFromFileTransferGUIDs:(id)arg1;
- (id)initWithMessageItem:(id)arg1;
- (id)initWithMessage:(id)arg1;

@end

