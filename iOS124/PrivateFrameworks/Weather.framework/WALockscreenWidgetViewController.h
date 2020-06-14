//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Weather/WATodayModelObserver-Protocol.h>

@class NSDate, NSString, NSTimer, WAForecastModel, WATodayModel, WATodayPadView;
@protocol WAWidgetDelegate;

@interface WALockscreenWidgetViewController : UIViewController <WATodayModelObserver>
{
    _Bool _locationServicesActive;
    WATodayPadView *_todayView;
    double _updateInterval;
    id <WAWidgetDelegate> _delegate;
    WATodayModel *_todayModel;
    WAForecastModel *_currentForecastModel;
    NSTimer *_updateTimer;
    NSDate *_updateLastCompletionDate;
}

+ (id)sharedInstanceIfExists;
@property(copy, nonatomic) NSDate *updateLastCompletionDate; // @synthesize updateLastCompletionDate=_updateLastCompletionDate;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(copy, nonatomic) WAForecastModel *currentForecastModel; // @synthesize currentForecastModel=_currentForecastModel;
@property(retain, nonatomic) WATodayModel *todayModel; // @synthesize todayModel=_todayModel;
@property(nonatomic) __weak id <WAWidgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
@property(nonatomic) _Bool locationServicesActive; // @synthesize locationServicesActive=_locationServicesActive;
@property(retain, nonatomic) WATodayPadView *todayView; // @synthesize todayView=_todayView;
- (void).cxx_destruct;
- (void)getLocationServicesAuthorizationStatus:(CDUnknownBlockType)arg1;
- (void)_delegateUpdateDidFailWithError:(id)arg1;
- (void)_delegateDidUpdate;
- (void)_delegateWillUpdate;
- (_Bool)_delegateShouldUpdateForecast;
- (id)_conditionsImage;
- (id)_conditionsLine;
- (id)_temperature;
- (id)_locationName;
- (_Bool)shouldFakeWeather;
- (void)_teardownWeatherModel;
- (void)_setupWeatherModel;
- (void)_teardownTimer;
- (void)_scheduleNewTimer;
- (void)_updateTimerFired:(id)arg1;
- (void)todayModel:(id)arg1 forecastWasUpdated:(id)arg2;
- (void)todayModelWantsUpdate:(id)arg1;
- (void)_updateTodayView;
- (void)_setTodayViewHidden:(_Bool)arg1;
- (void)_updateWithReason:(id)arg1;
@property(readonly, nonatomic) _Bool todayViewIsVisible;
- (void)updateForChangedSettings:(id)arg1;
- (void)updateWeather;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

