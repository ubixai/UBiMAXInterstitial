//
//  UMTAdManager+Interstitial.h
//  UMTInterstitial
//
//  Created by guoqiang on 2024/9/6.
//

#import <UBiMAXAdSDK/UMTAdSDK.h>
#import "UMTInterstitial.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMTAdManager (Interstitial)

- (void)loadInterstitial:(UMTInterstitial *)interstitialAd 
                   extra:(NSDictionary *)extra
                delegate:(id<UMTInterstitialLoadDelegate>)delegate;

- (BOOL)isReadyForInterstitial:(UMTInterstitial *)interstitialAd;

- (void)showInterstitial:(UMTInterstitial *)interstitialAd inRootVC:(UIViewController *)rootVC delegate:(id<UMTInterstitialShowDelegate>)delegate;


@end

NS_ASSUME_NONNULL_END
