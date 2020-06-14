//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentInsertionCondition-Protocol.h>

@class NSString;
@protocol SXComponent;

@interface SXPastBodyComponentInsertionCondition : NSObject <SXComponentInsertionCondition>
{
    id <SXComponent> _firstBodyComponent;
    struct CGPoint _firstBodyComponentThreshold;
}

@property(nonatomic) struct CGPoint firstBodyComponentThreshold; // @synthesize firstBodyComponentThreshold=_firstBodyComponentThreshold;
@property(retain, nonatomic) id <SXComponent> firstBodyComponent; // @synthesize firstBodyComponent=_firstBodyComponent;
- (void).cxx_destruct;
- (id)findFirstBodyComponentInComponents:(id)arg1;
- (_Bool)validateMarker:(id)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id)arg3;
- (void)prepareWithComponents:(id)arg1 layoutProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

