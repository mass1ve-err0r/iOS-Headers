//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSPLazyReference, TSPObject;

@protocol TSPLazyReferenceDelegate <NSObject>
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forLazyReference:(TSPLazyReference *)arg3;
- (_Bool)readLazyReference:(TSPLazyReference *)arg1 object:(id *)arg2 error:(id *)arg3;
- (TSPObject *)objectForIdentifier:(long long)arg1;

@optional
- (void)lazyReference:(TSPLazyReference *)arg1 didCreateCopy:(TSPLazyReference *)arg2;
@end

