//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString, TDPhotoshopRenditionSpec;

@interface TDPhotoshopLayer : NSManagedObject
{
}

- (id)hierarchicalLayerNames;

// Remaining properties
@property(retain, nonatomic) TDPhotoshopLayer *childLayer; // @dynamic childLayer;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) TDPhotoshopLayer *parentLayer; // @dynamic parentLayer;
@property(retain, nonatomic) TDPhotoshopRenditionSpec *rendition; // @dynamic rendition;

@end
