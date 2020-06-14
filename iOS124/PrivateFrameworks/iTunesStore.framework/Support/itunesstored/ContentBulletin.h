//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Bulletin.h"

@class BBSettingsGateway, ISURLBag, NSArray, NSDate, NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface ContentBulletin : Bulletin
{
    NSString *_artworkUrl;
    NSArray *_buttons;
    NSString *_category;
    NSDate *_explirationDate;
    _Bool _explicitContent;
    NSObject<OS_dispatch_queue> *_imageQueue;
    NSDictionary *_metrics;
    long long _version;
    ISURLBag *_urlBag;
    NSObject<OS_dispatch_queue> *_settingsGatewayQueue;
    BBSettingsGateway *_settingsGateway;
    NSString *_clientId;
}

@property(copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(copy, nonatomic) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) _Bool explicitContent; // @synthesize explicitContent=_explicitContent;
@property(copy, nonatomic) NSDate *explirationDate; // @synthesize explirationDate=_explirationDate;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(copy, nonatomic) NSString *artworkUrl; // @synthesize artworkUrl=_artworkUrl;
- (void).cxx_destruct;
- (id)_saveImageData:(id)arg1;
- (_Bool)getNotificationSetting;
- (void)_reportMetrics:(id)arg1 bulletinId:(id)arg2 responseButtonActionId:(id)arg3;
- (void)_removeArtworkFromCache;
- (void)_loadURLBag;
- (id)_downloadArtworkWithURL:(id)arg1 recordID:(id)arg2;
- (id)_cachedImagePath;
- (id)_cachedImageData;
- (void)willPostBulletin;
- (id)newBulletinRequest;
- (void)handleBulletinActionResponse:(id)arg1;
- (void)getPNGAttachmentDataWithConstraints:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyBulletinDictionary;
- (void)cleanUp;
- (id)initWithBulletinDictionary:(id)arg1;
- (id)init;

@end

