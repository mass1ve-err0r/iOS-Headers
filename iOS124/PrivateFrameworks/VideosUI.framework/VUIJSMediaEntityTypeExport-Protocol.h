//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/JSExport-Protocol.h>

@class NSString;

@protocol VUIJSMediaEntityTypeExport <JSExport>
+ (id)homeVideo;
+ (id)rental;
+ (id)movie;
+ (id)episode;
+ (id)season;
+ (id)show;
@property(readonly, nonatomic) NSString *collectionType;
@property(readonly, nonatomic) NSString *category;
@property(readonly, nonatomic) NSString *subtype;
@end

