//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoBitmap : PBCodable <NSCopying>
{
    unsigned long long _bitsPerComponent;
    unsigned long long _bitsPerPixel;
    unsigned long long _bytesPerRow;
    unsigned long long _height;
    unsigned long long _width;
    NSData *_bitmapData;
    unsigned int _bitmapInfo;
}

@property(retain, nonatomic) NSData *bitmapData; // @synthesize bitmapData=_bitmapData;
@property(nonatomic) unsigned int bitmapInfo; // @synthesize bitmapInfo=_bitmapInfo;
@property(nonatomic) unsigned long long bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property(nonatomic) unsigned long long bitsPerPixel; // @synthesize bitsPerPixel=_bitsPerPixel;
@property(nonatomic) unsigned long long bitsPerComponent; // @synthesize bitsPerComponent=_bitsPerComponent;
@property(nonatomic) unsigned long long height; // @synthesize height=_height;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;

@end

