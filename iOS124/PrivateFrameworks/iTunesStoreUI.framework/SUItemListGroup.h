//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, SUItem;

@interface SUItemListGroup : NSObject
{
    NSMutableArray *_items;
    SUItem *_separatorItem;
}

@property(retain, nonatomic) SUItem *separatorItem; // @synthesize separatorItem=_separatorItem;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) NSString *indexBarTitle;
- (id)description;
- (void)dealloc;

@end

