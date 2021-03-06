/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PULivePhotoAnalysisViewController : UIViewController <PULivePhotoMapViewDelegate, UIScrollViewDelegate> {
    NSArray *__constraints;
    UILabel *__currentFrameLabel;
    BOOL __didConfigureScrollView;
    NSArray *__frameTimes;
    PULivePhotoMapView *__mapView;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } __playerTime;
    ISPlayerView *__playerView;
    UIScrollView *__scrollView;
    BOOL __showRelativeTime;
    AVPlayer *__videoPlayer;
    id __videoPlayerObserver;
    PHLivePhoto *_livePhoto;
}

@property (nonatomic, readonly) NSArray *_constraints;
@property (nonatomic, readonly) UILabel *_currentFrameLabel;
@property (setter=_setDidConfigureScrollView:, nonatomic) BOOL _didConfigureScrollView;
@property (setter=_setFrameTimes:, nonatomic, retain) NSArray *_frameTimes;
@property (nonatomic, readonly) PULivePhotoMapView *_mapView;
@property (setter=_setPlayerTime:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } _playerTime;
@property (nonatomic, readonly) ISPlayerView *_playerView;
@property (nonatomic, readonly) UIScrollView *_scrollView;
@property (setter=_setShowRelativeTime:, nonatomic) BOOL _showRelativeTime;
@property (nonatomic, readonly) AVPlayer *_videoPlayer;
@property (setter=_setVideoPlayerObserver:, nonatomic, retain) id _videoPlayerObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) PHLivePhoto *livePhoto;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_constraints;
- (id)_currentFrameLabel;
- (BOOL)_didConfigureScrollView;
- (void)_done:(id)arg1;
- (id)_frameTimes;
- (void)_handleFrameTimesRequestFinished:(BOOL)arg1 frameTimes:(id)arg2 error:(id)arg3;
- (void)_handlePlayerDidUpdateToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_handleTimeLabelTap:(id)arg1;
- (void)_layoutPlayerView;
- (id)_mapView;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_playerTime;
- (id)_playerView;
- (id)_scrollView;
- (void)_setDidConfigureScrollView:(BOOL)arg1;
- (void)_setFrameTimes:(id)arg1;
- (void)_setPlayerTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setShowRelativeTime:(BOOL)arg1;
- (void)_setVideoPlayerObserver:(id)arg1;
- (BOOL)_showRelativeTime;
- (void)_updateMapView;
- (void)_updateMapViewCurrentTime;
- (void)_updateTimeLabelText;
- (id)_videoPlayer;
- (id)_videoPlayerObserver;
- (id)initWithLivePhoto:(id)arg1;
- (id)livePhoto;
- (void)loadView;
- (void)mapViewSelectedTimeDidChange:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
