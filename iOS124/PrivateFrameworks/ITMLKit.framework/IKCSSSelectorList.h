//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/NSCopying-Protocol.h>

@class IKMutableArray;

@interface IKCSSSelectorList : NSObject <NSCopying>
{
    IKMutableArray *_selectors;
}

@property(readonly, nonatomic) IKMutableArray *selectors; // @synthesize selectors=_selectors;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
- (id)lastSelector;
- (id)firstSelector;
- (id)selectorAtIndex:(unsigned long long)arg1;
- (void)addSelector:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

