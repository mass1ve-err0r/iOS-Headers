//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSString, NSURL;
@protocol GEOMapItemPhotoInfo;

@protocol GEOMapItemPhoto <NSObject>
@property(readonly, nonatomic) _Bool businessProvided;
@property(readonly, nonatomic) _Bool highQuality;
@property(readonly, nonatomic) double sizeRatio;
@property(readonly, nonatomic) NSString *uid;
@property(readonly, nonatomic) _Bool useGallery;
@property(readonly, nonatomic) _Bool displayFullPhotoInline;
@property(readonly, nonatomic) NSURL *licenseURL;
@property(readonly, nonatomic) NSString *licenseDescription;
@property(readonly, nonatomic) NSString *caption;
@property(readonly, nonatomic) NSString *author;
- (id <GEOMapItemPhotoInfo>)bestPhotoForSize:(struct CGSize)arg1 allowSmaller:(_Bool)arg2;
- (id <GEOMapItemPhotoInfo>)largestPhoto;
@end

