//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOResolvedItem;

@interface GEODirectionIntent : NSObject
{
    GEOResolvedItem *_origin;
    GEOResolvedItem *_destination;
    int _transportType;
}

@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) GEOResolvedItem *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) GEOResolvedItem *origin; // @synthesize origin=_origin;
- (void).cxx_destruct;
- (id)initWithDirectionIntent:(id)arg1;

@end

