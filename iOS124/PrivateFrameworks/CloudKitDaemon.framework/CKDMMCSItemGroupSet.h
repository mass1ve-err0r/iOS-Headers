//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDMMCSItemGroupSet : NSObject
{
    NSMutableDictionary *_itemsByGroupTuple;
}

@property(retain, nonatomic) NSMutableDictionary *itemsByGroupTuple; // @synthesize itemsByGroupTuple=_itemsByGroupTuple;
- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (id)allItemGroups;
@property(readonly, nonatomic) NSError *error;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithItems:(id)arg1;
- (id)init;

@end
