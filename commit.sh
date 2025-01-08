tree-sitter generate
\&& tree-sitter build
\&& git add .
\&& git commit -m "grammar"
\&& git push
\&& git rev-parse HEAD | pbcopy
