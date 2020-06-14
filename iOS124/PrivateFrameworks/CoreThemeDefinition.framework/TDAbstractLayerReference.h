//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString;

@interface TDAbstractLayerReference : NSManagedObject
{
    struct CGRect _frameRect;
}

- (void)awakeFromFetch;
@property(nonatomic) struct CGRect frameRect; // @dynamic frameRect;
@property(nonatomic) struct CGRect primitiveFrameRect;

// Remaining properties
@property(retain, nonatomic) NSNumber *blendMode; // @dynamic blendMode;
@property(retain, nonatomic) NSString *frameRectString; // @dynamic frameRectString;
@property(nonatomic) _Bool makeOpaqueIfPossible; // @dynamic makeOpaqueIfPossible;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSNumber *opacity; // @dynamic opacity;

@end

