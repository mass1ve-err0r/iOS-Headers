//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKMapTileList : NSObject
{
    struct vector<VKMapTile *, std::__1::allocator<VKMapTile *>> _list;
    float _maximumStyleZ;
}

@property(readonly, nonatomic) float maximumStyleZ; // @synthesize maximumStyleZ=_maximumStyleZ;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearList;
- (void)addTileToList:(id)arg1;
@property(readonly, nonatomic) unsigned long long numTiles;
@property(readonly, nonatomic) id *tileList;
- (id)init;

@end

