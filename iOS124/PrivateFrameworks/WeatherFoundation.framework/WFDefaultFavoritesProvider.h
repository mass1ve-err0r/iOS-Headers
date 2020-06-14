//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFFavoriteLocationProvider-Protocol.h>

@class NSString;
@protocol WFFavoriteLocationProviderDelegate;

__attribute__((visibility("hidden")))
@interface WFDefaultFavoritesProvider : NSObject <WFFavoriteLocationProvider>
{
    id <WFFavoriteLocationProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <WFFavoriteLocationProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeLocation:(id)arg1;
- (void)addLocation:(id)arg1;
- (void)setLocations:(id)arg1;
- (id)locationFromCity:(id)arg1;
- (id)locations;
- (_Bool)canProvideDefaultFavorites;
- (id)init;
- (id)initWithDelegate:(id)arg1 persistence:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

