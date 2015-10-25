/* Generated by RuntimeBrowser.
 */

@protocol ADInterstitialAdDelegate <NSObject>

@required

- (void)interstitialAd:(ADInterstitialAd *)arg1 didFailWithError:(NSError *)arg2;
- (void)interstitialAdDidUnload:(ADInterstitialAd *)arg1;

@optional

- (void)interstitialAdActionDidFinish:(ADInterstitialAd *)arg1;
- (BOOL)interstitialAdActionShouldBegin:(ADInterstitialAd *)arg1 willLeaveApplication:(BOOL)arg2;
- (void)interstitialAdDidLoad:(ADInterstitialAd *)arg1;
- (void)interstitialAdWillLoad:(ADInterstitialAd *)arg1;

@end
