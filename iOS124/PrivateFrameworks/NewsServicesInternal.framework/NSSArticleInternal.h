//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsServicesInternal/NSCoding-Protocol.h>

@class NSDate, NSString, UIImage;

@interface NSSArticleInternal : NSObject <NSCoding>
{
    UIImage *_thumbnailImage;
    UIImage *_publisherLogoImage;
    NSString *_title;
    NSString *_shortExcerpt;
    NSDate *_publishDate;
    NSString *_publisherName;
}

+ (void)articleFromCoreSpotlightIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_articleFromCoreSpotlightIdentifier:(id)arg1 domain:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)coreSpotlightIdentifierRepresentsArticleIdentifier:(id)arg1;
+ (id)imageWithURL:(id)arg1;
+ (void)articleFromNotificationUserInfo:(id)arg1 thumbnailFileURL:(id)arg2 publisherLogoFileURL:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)articleFromNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *publisherName; // @synthesize publisherName=_publisherName;
@property(readonly, nonatomic) NSDate *publishDate; // @synthesize publishDate=_publishDate;
@property(readonly, nonatomic) NSString *shortExcerpt; // @synthesize shortExcerpt=_shortExcerpt;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) UIImage *publisherLogoImage; // @synthesize publisherLogoImage=_publisherLogoImage;
@property(readonly, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithThumbnailImage:(id)arg1 title:(id)arg2 shortExcerpt:(id)arg3 publishDate:(id)arg4 publisherName:(id)arg5 publisherLogoImage:(id)arg6;
- (id)init;

@end

