//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapLayerDataServiceLayer, GEOMapLayerDataServiceLayerIndex, GEOMapLayerDataServiceVersion;

__attribute__((visibility("hidden")))
@interface GEOMapLayerDataServicePatch : PBCodable <NSCopying>
{
    GEOMapLayerDataServiceLayerIndex *_index;
    GEOMapLayerDataServiceLayer *_layer;
    GEOMapLayerDataServiceVersion *_sourceVersion;
    GEOMapLayerDataServiceVersion *_targetVersion;
}

@property(retain, nonatomic) GEOMapLayerDataServiceLayerIndex *index; // @synthesize index=_index;
@property(retain, nonatomic) GEOMapLayerDataServiceVersion *targetVersion; // @synthesize targetVersion=_targetVersion;
@property(retain, nonatomic) GEOMapLayerDataServiceVersion *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(retain, nonatomic) GEOMapLayerDataServiceLayer *layer; // @synthesize layer=_layer;
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
@property(readonly, nonatomic) _Bool hasIndex;
@property(readonly, nonatomic) _Bool hasTargetVersion;
@property(readonly, nonatomic) _Bool hasSourceVersion;
@property(readonly, nonatomic) _Bool hasLayer;

@end

