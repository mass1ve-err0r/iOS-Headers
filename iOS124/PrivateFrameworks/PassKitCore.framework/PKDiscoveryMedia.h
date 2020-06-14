//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, PKColor;

@interface PKDiscoveryMedia : NSObject <NSSecureCoding>
{
    long long _type;
    NSDictionary *_urls;
    double _width;
    double _height;
    PKColor *_backgroundColor;
    NSString *_passKitUIImageName;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *passKitUIImageName; // @synthesize passKitUIImageName=_passKitUIImageName;
@property(readonly, nonatomic) PKColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) double width; // @synthesize width=_width;
@property(readonly, nonatomic) NSDictionary *urls; // @synthesize urls=_urls;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)_remoteAssetForScale:(double)arg1;
- (void)downloadImageDataWithScale:(double)arg1 shouldWriteData:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)imageDataFromCacheWithScale:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end

