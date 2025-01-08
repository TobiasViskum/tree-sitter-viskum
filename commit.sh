sh ./buildparser.sh \
&& git add . \
&& git commit -m "grammar update" \
&& git push \
&& git rev-parse HEAD | pbcopy
