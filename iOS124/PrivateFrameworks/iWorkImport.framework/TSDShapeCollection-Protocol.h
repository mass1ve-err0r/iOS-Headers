//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSString;
@protocol TSDShapeCollectionShape;

@protocol TSDShapeCollection <NSObject>
@property(readonly, nonatomic) unsigned long long numberOfShapes;
@property(readonly, nonatomic) NSString *name;
- (id <TSDShapeCollectionShape>)shapeAtIndex:(unsigned long long)arg1;
@end

